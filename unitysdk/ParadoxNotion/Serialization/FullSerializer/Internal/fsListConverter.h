#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsConverter.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSLISTCONVERTER_CANPROCESS_OFFSET UNITYSDK_OFFSET(0x19FFDA90)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSLISTCONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19FFDB00)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSLISTCONVERTER_TRYDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19FFE1A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSLISTCONVERTER_TRYSERIALIZE_OFFSET UNITYSDK_OFFSET(0x19FFDB90)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSLISTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFEAB0)

namespace ParadoxNotion::Serialization::FullSerializer::Internal
{
	inline static constexpr unsigned int fsListConverter_TypeDefinitionIndex = 27155;

	class fsListConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSLISTCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanProcess(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSLISTCONVERTER_CANPROCESS_OFFSET))(this, type);
		}

		::System::Object* CreateInstance(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType)
		{
			return ((::System::Object*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSLISTCONVERTER_CREATEINSTANCE_OFFSET))(this, data, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TrySerialize(::System::Object* instance_, ::ParadoxNotion::Serialization::FullSerializer::fsData*& serialized, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSLISTCONVERTER_TRYSERIALIZE_OFFSET))(this, instance_, serialized, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryDeserialize(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Object*& instance_, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Object*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSLISTCONVERTER_TRYDESERIALIZE_OFFSET))(this, data, instance_, storageType);
		}
	};
}
