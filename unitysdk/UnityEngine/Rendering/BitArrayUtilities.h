#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET128_OFFSET UNITYSDK_OFFSET(0x18429AD0)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET16_OFFSET UNITYSDK_OFFSET(0x1842A870)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET256_OFFSET UNITYSDK_OFFSET(0x1842B8E0)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET32_OFFSET UNITYSDK_OFFSET(0x1842CA10)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET64_OFFSET UNITYSDK_OFFSET(0x1842D560)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET8_OFFSET UNITYSDK_OFFSET(0x1842E010)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET128_OFFSET UNITYSDK_OFFSET(0x18429BF0)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET16_OFFSET UNITYSDK_OFFSET(0x1842A960)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET256_OFFSET UNITYSDK_OFFSET(0x1842BA00)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET32_OFFSET UNITYSDK_OFFSET(0x1842CB00)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET64_OFFSET UNITYSDK_OFFSET(0x1842D650)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET8_OFFSET UNITYSDK_OFFSET(0x1842E100)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArrayUtilities_TypeDefinitionIndex = 9579;

	class BitArrayUtilities : public ::System::Object
	{
	public:
		static ::System::Boolean Get8(::System::UInt32 index, ::System::Byte data)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET8_OFFSET))(index, data);
		}

		static ::System::Boolean Get16(::System::UInt32 index, ::System::UInt16 data)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET16_OFFSET))(index, data);
		}

		static ::System::Boolean Get32(::System::UInt32 index, ::System::UInt32 data)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET32_OFFSET))(index, data);
		}

		static ::System::Boolean Get64(::System::UInt32 index, ::System::UInt64 data)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET64_OFFSET))(index, data);
		}

		static ::System::Boolean Get128(::System::UInt32 index, ::System::UInt64 data1, ::System::UInt64 data2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET128_OFFSET))(index, data1, data2);
		}

		static ::System::Boolean Get256(::System::UInt32 index, ::System::UInt64 data1, ::System::UInt64 data2, ::System::UInt64 data3, ::System::UInt64 data4)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET256_OFFSET))(index, data1, data2, data3, data4);
		}

		static ::System::Void Set8(::System::UInt32 index, ::System::Byte& data, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET8_OFFSET))(index, data, value);
		}

		static ::System::Void Set16(::System::UInt32 index, ::System::UInt16& data, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt16&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET16_OFFSET))(index, data, value);
		}

		static ::System::Void Set32(::System::UInt32 index, ::System::UInt32& data, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET32_OFFSET))(index, data, value);
		}

		static ::System::Void Set64(::System::UInt32 index, ::System::UInt64& data, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt64&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET64_OFFSET))(index, data, value);
		}

		static ::System::Void Set128(::System::UInt32 index, ::System::UInt64& data1, ::System::UInt64& data2, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt64&, ::System::UInt64&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET128_OFFSET))(index, data1, data2, value);
		}

		static ::System::Void Set256(::System::UInt32 index, ::System::UInt64& data1, ::System::UInt64& data2, ::System::UInt64& data3, ::System::UInt64& data4, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET256_OFFSET))(index, data1, data2, data3, data4, value);
		}
	};
}
