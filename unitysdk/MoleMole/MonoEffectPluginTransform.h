#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/MoleMole/MonoEffectPluginTransform_Enum_3_7E226242B470B21D.h"
#include "unitysdk/MoleMole/MonoEffectPluginTransform_SyncDataStruct.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffect; }
namespace MoleMole { class MonoEffectPluginTransform_Class_1_D15846DA6A50C310; }
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_DOUPDATETRANSFORMLIST_OFFSET UNITYSDK_OFFSET(0xD0EEB00)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0xD0EE2B0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0xD0EE330)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0xD0EF3E0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xD0F05E0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_924FB2174018B69E_OFFSET UNITYSDK_OFFSET(0xD0EFA40)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_D0C3AE61288C85E9_OFFSET UNITYSDK_OFFSET(0xD0EEFC0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_D1A3D5439FF4CA78_OFFSET UNITYSDK_OFFSET(0xD0F06E0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD0EED80)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD0EEB70)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD0EE910)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD0EECA0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xD0EF100)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_SET_RENDERERS_OFFSET UNITYSDK_OFFSET(0xD0EE2C0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0EF350)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xD0EF330)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginTransform_TypeDefinitionIndex = 77759;

	class MonoEffectPluginTransform : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		static ::System::Int32* StaticGet_Field_6_18()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0xFCB0);
		}
		static ::System::Int32* StaticGet_Field_6_19()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0xFCB4);
		}
		static ::System::Int32* StaticGet_Field_6_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0xFCB8);
		}
		static ::System::Int32* StaticGet_Field_6_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0xFCBC);
		}
		static ::System::Int32* StaticGet_Field_6_17()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0xFCC0);
		}
		// static const ::System::String* Field_6_8; // 0x0
		// static const ::System::String* Field_6_9; // 0x0
		// static const ::System::String* Field_6_10; // 0x0
		// static const ::System::String* Field_6_11; // 0x0
		// static const ::System::String* Field_6_12; // 0x0
		// static const ::System::String* Field_6_13; // 0x0
		// static const ::System::String* Field_6_14; // 0x0
		// static const ::System::String* Field_6_15; // 0x0
		// static const ::System::String* Field_6_16; // 0x0
		::MoleMole::MonoEffectPluginTransform_Enum_3_7E226242B470B21D strategy; // 0x18
		::System::Boolean isSceneEffect; // 0x1C
		::System::Boolean tickMuted; // 0x1D
		::Il2CppArray<::UnityEngine::Renderer*>* Field_6_3; // 0x20
		::MoleMole::MonoEffect* monoEffect; // 0x28
		::UnityEngine::Vector3 Field_6_5; // 0x30
		::UnityEngine::Quaternion Field_6_6; // 0x3C
		::UnityEngine::Vector3 Field_6_7; // 0x4C
		::Il2CppArray<::MoleMole::MonoEffectPluginTransform_Class_1_D15846DA6A50C310*>* Field_6_22; // 0x58
		::Il2CppArray<::MoleMole::MonoEffectPluginTransform_SyncDataStruct>* _syncDataStructs; // 0x60
		::UnityEngine::MaterialPropertyBlock* Field_6_24; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CCTOR_OFFSET))();
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_Renderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_GET_RENDERERS_OFFSET))(this);
		}

		::System::Void set_Renderers(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_SET_RENDERERS_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDESTROY_OFFSET))(this);
		}

		::System::Void DoUpdateTransformList(::UnityEngine::MaterialPropertyBlock*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_DOUPDATETRANSFORMLIST_OFFSET))(this, a1);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Method_6_0E3D8071A5930FA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_0E3D8071A5930FA8_OFFSET))(this);
		}

		::System::Void Method_6_924FB2174018B69E(::MoleMole::MonoEffectPluginTransform_Class_1_D15846DA6A50C310* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginTransform_Class_1_D15846DA6A50C310*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_924FB2174018B69E_OFFSET))(this, a1);
		}

		::System::Void Method_6_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_56CE4AFC5339F746_OFFSET))(this);
		}

		static ::System::Void Method_6_D1A3D5439FF4CA78(::MoleMole::MonoEffectPluginTransform_SyncDataStruct& a1, ::UnityEngine::MaterialPropertyBlock*& a2)
		{
			return ((::System::Void(*)(::MoleMole::MonoEffectPluginTransform_SyncDataStruct&, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_D1A3D5439FF4CA78_OFFSET))(a1, a2);
		}

		::System::Void Method_6_07280B24DFAC0CA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_07280B24DFAC0CA9_OFFSET))(this);
		}

		::System::Void Method_6_D0C3AE61288C85E9(::UnityEngine::MaterialPropertyBlock*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_D0C3AE61288C85E9_OFFSET))(this, a1);
		}
	};
}
