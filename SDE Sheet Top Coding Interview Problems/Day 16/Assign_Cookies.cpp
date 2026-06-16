//Assign Cookies
/* Consider a scenario where a teacher wants to distribute cookies to students, with each student receiving at most one cookie.
Given two arrays, student and cookie, the ith value in the Student array describes the minimum size of cookie that the ith student can be assigned. The jth value in the Cookie array represents the size of the jth cookie. If Cookie[j] >= Student[i], the jth cookie can be assigned to the ith student.
Maximize the number of students assigned with cookies and output the maximum number.
*/
class Solution{    
    public:
    int findMaximumCookieStudents(vector<int>& student, vector<int>& cookie){
        sort(student.begin(),student.end());
        sort(cookie.begin(),cookie.end());
        int n = student.size(),m = cookie.size();
        int i=0, j=0;
        while(i<n and j<m){
            if(cookie[j] >= student[i])i++;
            j++;
        }
        return i;
    }
};