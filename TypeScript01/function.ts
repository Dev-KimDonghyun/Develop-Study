function add (x: number, y: number) {
    return x + y;
};

function buildName(firstName: string, lastName?: string) {
    if (lastName)
        return firstName + " " + lastName;
    else
        return firstName;
};

// 있어도 되고 없어도 되는거는 타입 선언 앞에 `?`를 붙여준다