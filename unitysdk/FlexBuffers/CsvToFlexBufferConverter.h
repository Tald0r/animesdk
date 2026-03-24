#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FLEXBUFFERS_CSVTOFLEXBUFFERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x1A8511C0)

namespace FlexBuffers
{
	inline static constexpr unsigned int CsvToFlexBufferConverter_TypeDefinitionIndex = 8741;

	class CsvToFlexBufferConverter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* Convert(::System::String* csv, ::System::Char separator)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + FLEXBUFFERS_CSVTOFLEXBUFFERCONVERTER_CONVERT_OFFSET))(csv, separator);
		}
	};
}
