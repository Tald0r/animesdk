#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffectPluginAttachToCamera; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_3_8C84B83D3715B347_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x998EB50)
#define CLASS_3_8C84B83D3715B347_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x998ECE0)
#define CLASS_3_8C84B83D3715B347_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x998EC40)
#define CLASS_3_8C84B83D3715B347_METHOD_3_E10131BC77AF6D24_OFFSET UNITYSDK_OFFSET(0x998ED40)
#define CLASS_3_8C84B83D3715B347_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x998E9C0)
#define CLASS_3_8C84B83D3715B347__CCTOR_OFFSET UNITYSDK_OFFSET(0x998EBB0)
#define CLASS_3_8C84B83D3715B347__CTOR_OFFSET UNITYSDK_OFFSET(0x998EC30)

inline static constexpr unsigned int Class_3_8C84B83D3715B347_TypeDefinitionIndex = 44858;

class Class_3_8C84B83D3715B347 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0xA4; // 0x0
	::UnityEngine::Transform* Field_3_6; // 0x48
	::System::String* Field_3_0; // 0x50
	::UnityEngine::Vector3 Field_3_1; // 0x58
	::UnityEngine::Vector3 Field_3_2; // 0x64
	::UnityEngine::Vector3 Field_3_3; // 0x70
	::System::Boolean Field_3_4; // 0x7C
	::System::Boolean Field_3_5; // 0x7D

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8C84B83D3715B347__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C84B83D3715B347__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C84B83D3715B347_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C84B83D3715B347_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_8C84B83D3715B347* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_8C84B83D3715B347*(*)())((::PBYTE)hIl2Cpp + CLASS_3_8C84B83D3715B347_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C84B83D3715B347_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_E10131BC77AF6D24(::MoleMole::MonoEffectPluginAttachToCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginAttachToCamera*))((::PBYTE)hIl2Cpp + CLASS_3_8C84B83D3715B347_METHOD_3_E10131BC77AF6D24_OFFSET))(this, a1);
	}
};
