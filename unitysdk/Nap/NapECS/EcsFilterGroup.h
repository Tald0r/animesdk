#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSFILTERGROUP_ADDFILTER_OFFSET UNITYSDK_OFFSET(0x18829550)
#define NAP_NAPECS_ECSFILTERGROUP_DESTROY_OFFSET UNITYSDK_OFFSET(0x18829800)
#define NAP_NAPECS_ECSFILTERGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188298E0)
#define NAP_NAPECS_ECSFILTERGROUP_GETFILTERLISTBYINDEX_OFFSET UNITYSDK_OFFSET(0x18829680)
#define NAP_NAPECS_ECSFILTERGROUP_ISDISPATCHINGENTITY_OFFSET UNITYSDK_OFFSET(0x18820B10)
#define NAP_NAPECS_ECSFILTERGROUP_REFRESH_OFFSET UNITYSDK_OFFSET(0x18829980)
#define NAP_NAPECS_ECSFILTERGROUP_REGISTERDEFERREADY_OFFSET UNITYSDK_OFFSET(0x18820BE0)
#define NAP_NAPECS_ECSFILTERGROUP_UPDATEFILTERINDEX_OFFSET UNITYSDK_OFFSET(0x188291F0)
#define NAP_NAPECS_ECSFILTERGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1882BAE0)
#define NAP_NAPECS_ECSFILTERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x188294E0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsFilterGroup_TypeDefinitionIndex = 34225;

	class EcsFilterGroup : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Nap::NapECS::EcsEntity*>** StaticGet_ContextDispatchingEntity()
		{
			return (::System::Collections::Generic::List_1<::Nap::NapECS::EcsEntity*>**)Il2CppClass::FromTypeDefinitionIndex(EcsFilterGroup_TypeDefinitionIndex)->GetStaticField(0x24830);
		}
		static ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>** StaticGet_DispatchComponentReady()
		{
			return (::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(EcsFilterGroup_TypeDefinitionIndex)->GetStaticField(0x24838);
		}
		::Nap::NapECS::EcsSystem* ContextSystem; // 0x10
		::Il2CppArray<::System::Collections::Generic::List_1<::Nap::NapECS::EcsFilter*>*>* filterIndex; // 0x18
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsFilter*>* filterList; // 0x20
		::System::Int32 refreshStackCounter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDispatchingEntity(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP_ISDISPATCHINGENTITY_OFFSET))(entity);
		}

		static ::System::Void RegisterDeferReady(::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP_REGISTERDEFERREADY_OFFSET))(component);
		}

		::System::Void AddFilter(::Nap::NapECS::EcsFilter* filter)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP_ADDFILTER_OFFSET))(this, filter);
		}

		::System::Void UpdateFilterIndex(::Nap::NapECS::EcsFilter* filter, ::System::Byte newIncludeShotCompClassId)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP_UPDATEFILTERINDEX_OFFSET))(this, filter, newIncludeShotCompClassId);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::EcsFilter*>* GetFilterListByIndex(::System::Byte includeShotCompClassId, ::System::Boolean addNew)
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsFilter*>*(*)(::PVOID, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP_GETFILTERLISTBYINDEX_OFFSET))(this, includeShotCompClassId, addNew);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP_DESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Void Refresh(::Nap::NapECS::EcsEntity* entity, ::Nap::NapECS::ComponentMask& newMask, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* componentsToAdd, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* componentsToRemove)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::Nap::NapECS::ComponentMask&, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP_REFRESH_OFFSET))(this, entity, newMask, componentsToAdd, componentsToRemove);
		}
	};
}
