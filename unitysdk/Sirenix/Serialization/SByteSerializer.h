#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_SBYTESERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1B0D5A10)
#define SIRENIX_SERIALIZATION_SBYTESERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1B0D5ED0)
#define SIRENIX_SERIALIZATION_SBYTESERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0D5F90)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SByteSerializer_TypeDefinitionIndex = 7412;

	class SByteSerializer : public ::Sirenix::Serialization::Serializer_1<::System::SByte>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SBYTESERIALIZER__CTOR_OFFSET))(this);
		}

		::System::SByte ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::SByte(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SBYTESERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::SByte value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::SByte, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SBYTESERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
