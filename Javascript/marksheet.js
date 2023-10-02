function calculateMarksSheet(subjects) {
    const totalSubjects = subjects.length;
    if (totalSubjects === 0) {
        return "No subjects provided.";
    }

    let totalMarks = 0;
    for (const subject of subjects) {
        if (subject.marks >= 0 && subject.marks <= 100) {
            totalMarks += subject.marks;
        } else {
            return "Invalid marks. Marks should be between 0 and 100.";
        }
    }

    const percentage = (totalMarks / (totalSubjects * 100)) * 100;

    let grade;
    if (percentage >= 90) {
        grade = "A+";
    } else if (percentage >= 80) {
        grade = "A";
    } else if (percentage >= 70) {
        grade = "B";
    } else if (percentage >= 60) {
        grade = "C";
    } else if (percentage >= 50) {
        grade = "D";
    } else {
        grade = "F";
    }

    return {
        totalMarks,
        percentage: percentage.toFixed(2),
        grade,
    };
}

// Example usage:
const subjects = [
    { name: "Math", marks: 85 },
    { name: "Science", marks: 78 },
    { name: "English", marks: 92 },
];

const marksSheet = calculateMarksSheet(subjects);
console.log("Marks Sheet:", marksSheet);
