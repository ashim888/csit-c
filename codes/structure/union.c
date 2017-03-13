#include <stdio.h>

int main(){
	union student{
		int roll;
		float marks;
	};
union student st;
st.roll=455;
printf("Roll=%d\n", st.roll);

st.marks=67;
printf("marks=%d\n", st.marks);

}