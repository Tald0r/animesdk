#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"

namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { class EventArgs; }

#define CLASS_3_C4282D7CC5AF9153_METHOD_3_1A7EC4EE021A1331_OFFSET UNITYSDK_OFFSET(0x75132D0)
#define CLASS_3_C4282D7CC5AF9153_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x7513260)
#define CLASS_3_C4282D7CC5AF9153_METHOD_3_2A90EC3CDF3BC3BF_OFFSET UNITYSDK_OFFSET(0x7513770)
#define CLASS_3_C4282D7CC5AF9153_METHOD_3_95848FF728A82144_OFFSET UNITYSDK_OFFSET(0x7512EC0)
#define CLASS_3_C4282D7CC5AF9153_METHOD_3_C187F11607643D3C_OFFSET UNITYSDK_OFFSET(0x7512E30)
#define CLASS_3_C4282D7CC5AF9153_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7513710)
#define CLASS_3_C4282D7CC5AF9153_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x7513700)
#define CLASS_3_C4282D7CC5AF9153_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7512C70)
#define CLASS_3_C4282D7CC5AF9153_START_OFFSET UNITYSDK_OFFSET(0x7512990)
#define CLASS_3_C4282D7CC5AF9153__CTOR_OFFSET UNITYSDK_OFFSET(0x7513210)

inline static constexpr unsigned int Class_3_C4282D7CC5AF9153_TypeDefinitionIndex = 74734;

class Class_3_C4282D7CC5AF9153 : public ::Class_2_5560EE9F1F33A604
{
public:
	::MoleMole::UIHollowChessboard3DModelController* Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4282D7CC5AF9153__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4282D7CC5AF9153_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4282D7CC5AF9153_ONDESTROY_OFFSET))(this);
	}

	::System::Void Method_3_C187F11607643D3C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C4282D7CC5AF9153_METHOD_3_C187F11607643D3C_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C4282D7CC5AF9153_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_95848FF728A82144(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C4282D7CC5AF9153_METHOD_3_95848FF728A82144_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1A7EC4EE021A1331(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C4282D7CC5AF9153_METHOD_3_1A7EC4EE021A1331_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4282D7CC5AF9153_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4282D7CC5AF9153_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_2A90EC3CDF3BC3BF(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_C4282D7CC5AF9153_METHOD_3_2A90EC3CDF3BC3BF_OFFSET))(this, a1);
	}
};
