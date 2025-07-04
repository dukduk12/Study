// Lifecycle
// component의 생성, 변경, 소멸 과정을 의미한다.
import React, {Component} from 'react';

class R004_LifecycleEx extends Component{
    // render function : return 되는 html 형식의 코드를 화면에 그려주는 함수로, 화면 내용이 변경되어야 할 시점에 자동으로 호출
    // [console] 탭에서 출력된 로그를 확인할 수 있음
    render() {
        console.log('3. render Call');
        return (
            <h2>[This is RENDER FUNCTION]</h2>
        )
    }
}

export default R004_LifecycleEx;