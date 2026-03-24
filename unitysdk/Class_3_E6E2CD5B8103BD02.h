#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_E5B7864412CDC074;
class Class_1_F50B5EAC0B6702FB;
class Class_2_F5737224A0253470;
class Class_5_AF65C3A968E836D2;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }

#define CLASS_3_E6E2CD5B8103BD02_METHOD_3_33F3DD05385CAF15_OFFSET UNITYSDK_OFFSET(0xA271660)
#define CLASS_3_E6E2CD5B8103BD02_METHOD_3_4783115219892EE4_OFFSET UNITYSDK_OFFSET(0xA271530)
#define CLASS_3_E6E2CD5B8103BD02_METHOD_3_4E98D430D174B628_OFFSET UNITYSDK_OFFSET(0xA271310)
#define CLASS_3_E6E2CD5B8103BD02_METHOD_3_6DE2A6F149064C87_OFFSET UNITYSDK_OFFSET(0xA271650)
#define CLASS_3_E6E2CD5B8103BD02__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2714E0)
#define CLASS_3_E6E2CD5B8103BD02__CTOR_OFFSET UNITYSDK_OFFSET(0xA2714D0)

inline static constexpr unsigned int Class_3_E6E2CD5B8103BD02_TypeDefinitionIndex = 61845;

class Class_3_E6E2CD5B8103BD02 : public ::Class_2_A48F3719AA1CF200_3
{
public:
	static ::System::String** StaticGet_Field_3_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E6E2CD5B8103BD02_TypeDefinitionIndex)->GetStaticField(0x2D1E0);
	}
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E6E2CD5B8103BD02_TypeDefinitionIndex)->GetStaticField(0x2D1E8);
	}
	::MoleMole::UIHollowChessboard3DModelController* Field_3_2; // 0x28
	::Class_2_F5737224A0253470* Field_3_4; // 0x30
	::Class_1_E5B7864412CDC074* Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6E2CD5B8103BD02__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E6E2CD5B8103BD02__CCTOR_OFFSET))();
	}

	::System::Void Method_3_4E98D430D174B628(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_E6E2CD5B8103BD02_METHOD_3_4E98D430D174B628_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_5_AF65C3A968E836D2* Method_3_4783115219892EE4(::MoleMole::Config::ConfigSetSection_Order a1)
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID, ::MoleMole::Config::ConfigSetSection_Order))((::PBYTE)hIl2Cpp + CLASS_3_E6E2CD5B8103BD02_METHOD_3_4783115219892EE4_OFFSET))(this, a1);
	}

	::System::Void Method_3_6DE2A6F149064C87(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_E6E2CD5B8103BD02_METHOD_3_6DE2A6F149064C87_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_5_AF65C3A968E836D2* Method_3_33F3DD05385CAF15()
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6E2CD5B8103BD02_METHOD_3_33F3DD05385CAF15_OFFSET))(this);
	}
};
