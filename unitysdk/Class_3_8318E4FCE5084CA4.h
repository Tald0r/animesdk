#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_8318E4FCE5084CA4_Enum_3_FACFCB7FEED3E907.h"
#include "unitysdk/Struct_2_7CA3167312439069.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffectPluginClipPlane; }
namespace MoleMole { class MonoRenderHandlerForAvatar; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define CLASS_3_8318E4FCE5084CA4_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xBC85B60)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_583C0CCDBC30A79C_OFFSET UNITYSDK_OFFSET(0xBC85DD0)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xBC85C90)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xBC85D30)
#define CLASS_3_8318E4FCE5084CA4_METHOD_3_F73A90F086F5A538_OFFSET UNITYSDK_OFFSET(0xBC85CF0)
#define CLASS_3_8318E4FCE5084CA4_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xBC85980)
#define CLASS_3_8318E4FCE5084CA4__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC85BC0)
#define CLASS_3_8318E4FCE5084CA4__CTOR_OFFSET UNITYSDK_OFFSET(0xBC85C80)

inline static constexpr unsigned int Class_3_8318E4FCE5084CA4_TypeDefinitionIndex = 43014;

class Class_3_8318E4FCE5084CA4 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8318E4FCE5084CA4_TypeDefinitionIndex)->GetStaticField(0xFC30);
	}
	static ::System::Int32* StaticGet_Field_3_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8318E4FCE5084CA4_TypeDefinitionIndex)->GetStaticField(0xFC34);
	}
	static ::System::Int32* StaticGet_Field_3_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8318E4FCE5084CA4_TypeDefinitionIndex)->GetStaticField(0xFC38);
	}
	// static const ::System::Int32 Field_3_20 = 0xA5; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::Struct_2_7CA3167312439069>* Field_3_17; // 0x48
	::UnityEngine::Transform* Field_3_4; // 0x50
	::MoleMole::MonoEffectPluginClipPlane* Field_3_0; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_2; // 0x60
	::Il2CppArray<::UnityEngine::Material*>* Field_3_1; // 0x68
	::UnityEngine::Transform* Field_3_3; // 0x70
	::MoleMole::Battle::Entity* Field_3_18; // 0x78
	::System::String* Field_3_19; // 0x80
	::UnityEngine::Vector3 Field_3_11; // 0x88
	::UnityEngine::Vector3 Field_3_10; // 0x94
	::UnityEngine::Vector3 Field_3_14; // 0xA0
	::Class_3_8318E4FCE5084CA4_Enum_3_FACFCB7FEED3E907 Field_3_8; // 0xAC
	::UnityEngine::Quaternion Field_3_12; // 0xB0
	::UnityEngine::Quaternion Field_3_13; // 0xC0
	::System::Boolean Field_3_9; // 0xD0
	::System::Boolean Field_3_16; // 0xD1
	::UnityEngine::Vector3 Field_3_15; // 0xD4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 Method_3_F73A90F086F5A538()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_F73A90F086F5A538_OFFSET))(this);
	}

	static ::Class_3_8318E4FCE5084CA4* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_8318E4FCE5084CA4*(*)())((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_583C0CCDBC30A79C(::MoleMole::MonoEffectPluginClipPlane* a1, ::MoleMole::MonoRenderHandlerForAvatar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginClipPlane*, ::MoleMole::MonoRenderHandlerForAvatar*))((::PBYTE)hIl2Cpp + CLASS_3_8318E4FCE5084CA4_METHOD_3_583C0CCDBC30A79C_OFFSET))(this, a1, a2);
	}
};
