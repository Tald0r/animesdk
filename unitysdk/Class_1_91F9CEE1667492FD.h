#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A8F5ABF31E066ED4;
class UIControllerExtensionData;
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_91F9CEE1667492FD_METHOD_1_09FECD600358934F_OFFSET UNITYSDK_OFFSET(0x8D66BF0)
#define CLASS_1_91F9CEE1667492FD_METHOD_1_550342B2F1BCBE74_OFFSET UNITYSDK_OFFSET(0x8D668A0)
#define CLASS_1_91F9CEE1667492FD__CTOR_OFFSET UNITYSDK_OFFSET(0x8D66890)

inline static constexpr unsigned int Class_1_91F9CEE1667492FD_TypeDefinitionIndex = 70858;

class Class_1_91F9CEE1667492FD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F9CEE1667492FD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_550342B2F1BCBE74(::UnityEngine::UI::Extension::UILocalizationText* a1, ::System::Boolean a2, ::UIControllerExtensionData* a3)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::System::Boolean, ::UIControllerExtensionData*))((::PBYTE)hIl2Cpp + CLASS_1_91F9CEE1667492FD_METHOD_1_550342B2F1BCBE74_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_09FECD600358934F(::Class_2_A8F5ABF31E066ED4* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_2_A8F5ABF31E066ED4*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_91F9CEE1667492FD_METHOD_1_09FECD600358934F_OFFSET))(a1, a2);
	}
};
