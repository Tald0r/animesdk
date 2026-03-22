#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4354CA68936C9080.h"
#include "unitysdk/Enum_3_F9160878A7322AE9.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNewbie_HighLightData; }
namespace MoleMole { class ConfigNewbie_TargetPath; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define CLASS_1_F542B7C6D777DFEB_METHOD_1_9D55495002E88820_OFFSET UNITYSDK_OFFSET(0x7B42280)
#define CLASS_1_F542B7C6D777DFEB_METHOD_1_B3ADE91382BF0B05_OFFSET UNITYSDK_OFFSET(0x7B42960)
#define CLASS_1_F542B7C6D777DFEB_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x7B42260)
#define CLASS_1_F542B7C6D777DFEB_METHOD_1_C81277B215275574_OFFSET UNITYSDK_OFFSET(0x7B42270)
#define CLASS_1_F542B7C6D777DFEB_METHOD_1_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0x7B42100)
#define CLASS_1_F542B7C6D777DFEB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7B42970)
#define CLASS_1_F542B7C6D777DFEB_METHOD_1_F1D40B323FAD3DCE_OFFSET UNITYSDK_OFFSET(0x7B420F0)
#define CLASS_1_F542B7C6D777DFEB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7B42060)
#define CLASS_1_F542B7C6D777DFEB__CTOR_OFFSET UNITYSDK_OFFSET(0x7B41FE0)

inline static constexpr unsigned int Class_1_F542B7C6D777DFEB_TypeDefinitionIndex = 73489;

class Class_1_F542B7C6D777DFEB : public ::System::Object
{
public:
	::System::String* Field_1_8; // 0x10
	::UnityEngine::GameObject* Field_1_6; // 0x18
	::MoleMole::UIBaseController* Field_1_2; // 0x20
	::UnityEngine::UI::Extension::UIButtonBase* Field_1_5; // 0x28
	::MoleMole::ConfigNewbie_TargetPath* Field_1_3; // 0x30
	::MoleMole::UIBaseController* Field_1_10; // 0x38
	::Enum_3_4354CA68936C9080 Field_1_4; // 0x40
	::System::Boolean Field_1_1; // 0x44
	::System::Boolean Field_1_0; // 0x45
	::System::Boolean Field_1_9; // 0x46
	::System::Boolean Field_1_7; // 0x47

	::System::Void _ctor(::MoleMole::ConfigNewbie_TargetPath* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNewbie_TargetPath*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_F542B7C6D777DFEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::MoleMole::ConfigNewbie_HighLightData* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightData*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_F542B7C6D777DFEB__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F1D40B323FAD3DCE(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_F542B7C6D777DFEB_METHOD_1_F1D40B323FAD3DCE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F542B7C6D777DFEB_METHOD_1_D58849E1895DD394_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F542B7C6D777DFEB_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::MoleMole::ConfigNewbie_TargetPath* Method_1_C81277B215275574()
	{
		return ((::MoleMole::ConfigNewbie_TargetPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F542B7C6D777DFEB_METHOD_1_C81277B215275574_OFFSET))(this);
	}

	::System::Boolean Method_1_9D55495002E88820(::Enum_3_F9160878A7322AE9& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_F9160878A7322AE9&))((::PBYTE)hIl2Cpp + CLASS_1_F542B7C6D777DFEB_METHOD_1_9D55495002E88820_OFFSET))(this, a1);
	}

	::MoleMole::UIBaseController* Method_1_B3ADE91382BF0B05()
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F542B7C6D777DFEB_METHOD_1_B3ADE91382BF0B05_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F542B7C6D777DFEB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
