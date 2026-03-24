#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/Modules/ResourceExportingModule.h"

namespace FluffyUnderware::Curvy::Generator { class CGGameObjectResourceCollection; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A5A6080)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_DELETEALLOUTPUTMANAGEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1A5A5CF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_APPLYLAYERONCHILDREN_OFFSET UNITYSDK_OFFSET(0x1A5A5B40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_GAMEOBJECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5A5BF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_GAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1A5A5BE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1A5A5AE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_MAKESTATIC_OFFSET UNITYSDK_OFFSET(0x1A5A5B90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A5A5CB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A5A6090)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_RESETONENABLE_OFFSET UNITYSDK_OFFSET(0x1A5A6F90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_RESET_OFFSET UNITYSDK_OFFSET(0x1A5A5C20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SAVERESOURCETOSCENE_OFFSET UNITYSDK_OFFSET(0x1A5A6EF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_APPLYLAYERONCHILDREN_OFFSET UNITYSDK_OFFSET(0x1A5A5B50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1A5A5AF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_MAKESTATIC_OFFSET UNITYSDK_OFFSET(0x1A5A5BA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A7010)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int CreateGameObject_TypeDefinitionIndex = 36858;

	class CreateGameObject : public ::FluffyUnderware::Curvy::Generator::Modules::ResourceExportingModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InGameObjectArray; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InSpots; // 0xC0
		::FluffyUnderware::Curvy::Generator::CGGameObjectResourceCollection* m_Resources; // 0xC8
		::System::Boolean m_MakeStatic; // 0xD0
		::System::Int32 m_Layer; // 0xD4
		::System::Boolean applyLayerOnChildren; // 0xD8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::String*>* usedPoolsDictionary; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Layer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_LAYER_OFFSET))(this, value);
		}

		::System::Boolean get_ApplyLayerOnChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_APPLYLAYERONCHILDREN_OFFSET))(this);
		}

		::System::Void set_ApplyLayerOnChildren(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_APPLYLAYERONCHILDREN_OFFSET))(this, value);
		}

		::System::Boolean get_MakeStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_MAKESTATIC_OFFSET))(this);
		}

		::System::Void set_MakeStatic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SET_MAKESTATIC_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGGameObjectResourceCollection* get_GameObjects()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGGameObjectResourceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_GAMEOBJECTS_OFFSET))(this);
		}

		::System::Int32 get_GameObjectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_GET_GAMEOBJECTCOUNT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_RESET_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean DeleteAllOutputManagedResources()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_DELETEALLOUTPUTMANAGEDRESOURCES_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_CLEAR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_REFRESH_OFFSET))(this);
		}

		::UnityEngine::GameObject* SaveResourceToScene(::UnityEngine::Component* managedResource, ::UnityEngine::Transform* newParent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_SAVERESOURCETOSCENE_OFFSET))(this, managedResource, newParent);
		}

		::System::Void ResetOnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT_RESETONENABLE_OFFSET))(this);
		}
	};
}
