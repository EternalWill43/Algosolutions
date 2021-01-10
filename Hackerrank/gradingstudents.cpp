//		https://www.hackerrank.com/challenges/grading/problem
vector<int> gradingStudents(vector<int> grades) {
    for (int& i : grades) {
        if (i > 37 && ((i + 2) % 5 == 0)) i+=2;
        else if(i > 37 && ((i + 1) % 5 == 0)) ++i;
    }
    return grades;
}