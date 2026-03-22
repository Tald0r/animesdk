#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BCEAF20494F55723.h"
#include "unitysdk/System/Object.h"

class Class_1_ADD6877A1FCC4AE7;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace MoleMole::HollowChessboard { class HollowRenderSequenceConfig; }

#define CLASS_1_1968E4473955BE61_METHOD_1_BBC2AEBDB6F24ED1_OFFSET UNITYSDK_OFFSET(0x91A91D0)
#define CLASS_1_1968E4473955BE61__CTOR_OFFSET UNITYSDK_OFFSET(0x91A91C0)

inline static constexpr unsigned int Class_1_1968E4473955BE61_TypeDefinitionIndex = 79143;

class Class_1_1968E4473955BE61 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1968E4473955BE61__CTOR_OFFSET))(this);
	}

	::Class_1_ADD6877A1FCC4AE7* Method_1_BBC2AEBDB6F24ED1(::MoleMole::HollowChessboard::HollowRenderSequenceConfig* a1, ::MoleMole::HollowChessboard::HollowEntity* a2, ::Enum_3_BCEAF20494F55723 a3)
	{
		return ((::Class_1_ADD6877A1FCC4AE7*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowRenderSequenceConfig*, ::MoleMole::HollowChessboard::HollowEntity*, ::Enum_3_BCEAF20494F55723))((::PBYTE)hIl2Cpp + CLASS_1_1968E4473955BE61_METHOD_1_BBC2AEBDB6F24ED1_OFFSET))(this, a1, a2, a3);
	}
};
