#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ICollection; }
namespace System::ComponentModel { class IContainer; }
namespace System::ComponentModel { class MemberDescriptor; }
namespace System::ComponentModel::Design::Serialization { class SerializationStore; }
namespace System::IO { class Stream; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE_DESERIALIZETO_1_OFFSET UNITYSDK_OFFSET(0x18D66CA0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE_DESERIALIZETO_OFFSET UNITYSDK_OFFSET(0x18D66C70)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x18D66CD0)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int ComponentSerializationService_TypeDefinitionIndex = 3098;

	class ComponentSerializationService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void DeserializeTo(::System::ComponentModel::Design::Serialization::SerializationStore* store, ::System::ComponentModel::IContainer* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::Serialization::SerializationStore*, ::System::ComponentModel::IContainer*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE_DESERIALIZETO_OFFSET))(this, store, container);
		}

		::System::Void DeserializeTo_1(::System::ComponentModel::Design::Serialization::SerializationStore* store, ::System::ComponentModel::IContainer* container, ::System::Boolean validateRecycledTypes)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::Serialization::SerializationStore*, ::System::ComponentModel::IContainer*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE_DESERIALIZETO_1_OFFSET))(this, store, container, validateRecycledTypes);
		}
	};
}
