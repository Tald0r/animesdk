#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_543B6B88E17BAFE0.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"

class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIKeyBindingContext; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xBC88BD0)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_6A97131EF0C46C32_OFFSET UNITYSDK_OFFSET(0xBC88360)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_7543C0FD37466B05_OFFSET UNITYSDK_OFFSET(0xBC88730)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_859C6F275AA877D1_OFFSET UNITYSDK_OFFSET(0xBC88EA0)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xBC89130)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_B5E63D8490540221_OFFSET UNITYSDK_OFFSET(0xBC88740)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_B7F8E0B4AF22DEA3_1_OFFSET UNITYSDK_OFFSET(0xBC88CC0)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xBC889F0)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_F1455941B8C64246_OFFSET UNITYSDK_OFFSET(0xBC88550)
#define CLASS_1_00CE3360E2CE5BB6__CTOR_OFFSET UNITYSDK_OFFSET(0xBC88320)

inline static constexpr unsigned int Class_1_00CE3360E2CE5BB6_TypeDefinitionIndex = 51305;

class Class_1_00CE3360E2CE5BB6 : public ::System::Object
{
public:
	::MoleMole::UIKeyBindingContext* Field_1_0; // 0x10
	::Class_2_A8F5ABF31E066ED4* Field_1_4; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_1_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_6; // 0x28
	::System::Int32 Field_1_8; // 0x30
	::System::Boolean Field_1_7; // 0x34
	::MoleMole::LogicButtonInputType Field_1_3; // 0x38
	::Enum_3_543B6B88E17BAFE0 Field_1_2; // 0x3C
	::Enum_3_A019F766F8C74696 Field_1_1; // 0x40

	::System::Void _ctor(::MoleMole::UIKeyBindingContext* a1, ::MoleMole::LogicButtonInputType a2, ::Class_2_A8F5ABF31E066ED4* a3, ::Class_2_A8F5ABF31E066ED4* a4, ::UnityEngine::UI::Extension::UILocalizationText* a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIKeyBindingContext*, ::MoleMole::LogicButtonInputType, ::Class_2_A8F5ABF31E066ED4*, ::Class_2_A8F5ABF31E066ED4*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_6A97131EF0C46C32(::UnityEngine::InputSystem::LowLevel::MouseButton a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::MouseButton))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_6A97131EF0C46C32_OFFSET))(this, a1);
	}

	::System::Void Method_1_F1455941B8C64246(::UnityEngine::InputSystem::Key a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_F1455941B8C64246_OFFSET))(this, a1);
	}

	::MoleMole::LogicButtonInputType Method_1_7543C0FD37466B05()
	{
		return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_7543C0FD37466B05_OFFSET))(this);
	}

	::System::Int32 Method_1_B5E63D8490540221()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_B5E63D8490540221_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_1_859C6F275AA877D1(::UnityEngine::InputSystem::LowLevel::GamepadButton a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::GamepadButton))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_859C6F275AA877D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_B7F8E0B4AF22DEA3_1_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}
};
