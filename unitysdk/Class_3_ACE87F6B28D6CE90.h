#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class PathGuide; }

#define CLASS_3_ACE87F6B28D6CE90_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x8EE2DB0)
#define CLASS_3_ACE87F6B28D6CE90_METHOD_3_5274FC956E530595_OFFSET UNITYSDK_OFFSET(0x8EE2F20)
#define CLASS_3_ACE87F6B28D6CE90_METHOD_3_89DABD6194914AEE_OFFSET UNITYSDK_OFFSET(0x8EE2F30)
#define CLASS_3_ACE87F6B28D6CE90_METHOD_3_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x8EE2CF0)
#define CLASS_3_ACE87F6B28D6CE90__CTOR_OFFSET UNITYSDK_OFFSET(0x8EE2EA0)

inline static constexpr unsigned int Class_3_ACE87F6B28D6CE90_TypeDefinitionIndex = 78334;

class Class_3_ACE87F6B28D6CE90 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	::UnityEngine::UI::Extension::PathGuide* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACE87F6B28D6CE90__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_929BD2659F9FA6CA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_ACE87F6B28D6CE90_METHOD_3_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5274FC956E530595(::UnityEngine::UI::Extension::PathGuide* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*))((::PBYTE)hIl2Cpp + CLASS_3_ACE87F6B28D6CE90_METHOD_3_5274FC956E530595_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Extension::PathGuide* Method_3_89DABD6194914AEE()
	{
		return ((::UnityEngine::UI::Extension::PathGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACE87F6B28D6CE90_METHOD_3_89DABD6194914AEE_OFFSET))(this);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACE87F6B28D6CE90_METHOD_3_0865E94460F11643_OFFSET))(this);
	}
};
