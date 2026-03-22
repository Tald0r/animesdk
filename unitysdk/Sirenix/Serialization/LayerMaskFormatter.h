#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_LAYERMASKFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1B142470)
#define SIRENIX_SERIALIZATION_LAYERMASKFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1B1424F0)
#define SIRENIX_SERIALIZATION_LAYERMASKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1425B0)
#define SIRENIX_SERIALIZATION_LAYERMASKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B142570)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int LayerMaskFormatter_TypeDefinitionIndex = 7449;

	class LayerMaskFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::LayerMask>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_IntSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LayerMaskFormatter_TypeDefinitionIndex)->GetStaticField(0x63D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_LAYERMASKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_LAYERMASKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::LayerMask& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_LAYERMASKFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::LayerMask& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_LAYERMASKFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
