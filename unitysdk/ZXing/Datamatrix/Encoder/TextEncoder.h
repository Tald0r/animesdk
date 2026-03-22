#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/Datamatrix/Encoder/C40Encoder.h"

namespace System::Text { class StringBuilder; }

#define ZXING_DATAMATRIX_ENCODER_TEXTENCODER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x17D2D680)
#define ZXING_DATAMATRIX_ENCODER_TEXTENCODER_GET_ENCODINGMODE_OFFSET UNITYSDK_OFFSET(0x17D2D670)
#define ZXING_DATAMATRIX_ENCODER_TEXTENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D2BA50)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int TextEncoder_TypeDefinitionIndex = 8647;

	class TextEncoder : public ::ZXing::Datamatrix::Encoder::C40Encoder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_TEXTENCODER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_EncodingMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_TEXTENCODER_GET_ENCODINGMODE_OFFSET))(this);
		}

		::System::Int32 encodeChar(::System::Char c, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_TEXTENCODER_ENCODECHAR_OFFSET))(this, c, sb);
		}
	};
}
