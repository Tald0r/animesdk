#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ADD_OFFSET UNITYSDK_OFFSET(0x7F1C0A0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_AWAKE_OFFSET UNITYSDK_OFFSET(0x7F1C680)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GETATTACHPOINTTRANSBYNAME_OFFSET UNITYSDK_OFFSET(0x7F1BD90)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GET_OFFSET UNITYSDK_OFFSET(0x7F1BC10)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7F1C8E0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x7F1C820)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x7F1C750)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REMOVE_OFFSET UNITYSDK_OFFSET(0x7F1C3A0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REREGISTER_OFFSET UNITYSDK_OFFSET(0x7F1C9A0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x7F1CAC0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x7F1CAA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSoundGlobalAttachPoint_TypeDefinitionIndex = 42582;

	class MonoSoundGlobalAttachPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>** StaticGet_attachPoints()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSoundGlobalAttachPoint_TypeDefinitionIndex)->GetStaticField(0x3D280);
		}
		::System::String* attachPointName; // 0x18
		::System::Boolean registerOnAwake; // 0x20
		::System::Boolean Field_5_3; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CCTOR_OFFSET))();
		}

		static ::UnityEngine::GameObject* Get(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GET_OFFSET))(a1);
		}

		static ::UnityEngine::Transform* GetAttachPointTransByName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GETATTACHPOINTTRANSBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void Add(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ADD_OFFSET))(a1, a2);
		}

		static ::System::Boolean Remove(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REMOVE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reregister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REREGISTER_OFFSET))(this);
		}
	};
}
