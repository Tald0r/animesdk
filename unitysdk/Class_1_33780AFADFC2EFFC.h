#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Text; }

#define CLASS_1_33780AFADFC2EFFC_METHOD_1_236CC3AC73E97400_OFFSET UNITYSDK_OFFSET(0xEB0B300)
#define CLASS_1_33780AFADFC2EFFC_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xEB0B3F0)
#define CLASS_1_33780AFADFC2EFFC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEB0B400)
#define CLASS_1_33780AFADFC2EFFC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xEB0B460)
#define CLASS_1_33780AFADFC2EFFC__CTOR_OFFSET UNITYSDK_OFFSET(0xEB0B2F0)

inline static constexpr unsigned int Class_1_33780AFADFC2EFFC_TypeDefinitionIndex = 38461;

class Class_1_33780AFADFC2EFFC : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x14

	::System::Void _ctor(::UnityEngine::UI::Text* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_1_33780AFADFC2EFFC__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_236CC3AC73E97400(::UnityEngine::UI::Text* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_1_33780AFADFC2EFFC_METHOD_1_236CC3AC73E97400_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33780AFADFC2EFFC_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33780AFADFC2EFFC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33780AFADFC2EFFC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
