#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_QUATERNIONFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1AEBB090)
#define SIRENIX_SERIALIZATION_QUATERNIONFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1AEBB1C0)
#define SIRENIX_SERIALIZATION_QUATERNIONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEBB350)
#define SIRENIX_SERIALIZATION_QUATERNIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEBB310)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int QuaternionFormatter_TypeDefinitionIndex = 7450;

	class QuaternionFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::Quaternion>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_FloatSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(QuaternionFormatter_TypeDefinitionIndex)->GetStaticField(0x64C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_QUATERNIONFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_QUATERNIONFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::Quaternion& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_QUATERNIONFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Quaternion& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_QUATERNIONFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
