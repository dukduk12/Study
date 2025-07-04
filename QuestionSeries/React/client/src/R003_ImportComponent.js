// Component
// 특정 코드 뭉치를 다른 부분에 이식하거나 재사용하기 위해 사용하는 코드 블록 단위
// 파일 단위로 작성 후 필요한 위치에서 임포트 해 사용
import React, {Component} from 'react';

class R003_ImportComponent extends Component{
    render() {
        return (
            <h2>[This is Imported Component]</h2>
        )
    }
}

export default R003_ImportComponent;