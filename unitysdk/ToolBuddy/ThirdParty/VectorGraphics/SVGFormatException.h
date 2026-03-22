#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }
namespace System::Xml { class XmlReader; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGFORMATEXCEPTION_COMPOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x193B9BA0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGFORMATEXCEPTION_GET_STACKERROR_OFFSET UNITYSDK_OFFSET(0x193A5530)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGFORMATEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193A4EA0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGFORMATEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x193BA040)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGFORMATEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x193B9B40)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGFormatException_TypeDefinitionIndex = 27000;

	class SVGFormatException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGFORMATEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGFORMATEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Xml::XmlReader* reader, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGFORMATEXCEPTION__CTOR_2_OFFSET))(this, reader, message);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::SVGFormatException* get_StackError()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGFormatException*(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGFORMATEXCEPTION_GET_STACKERROR_OFFSET))();
		}

		static ::System::String* ComposeMessage(::System::Xml::XmlReader* reader, ::System::String* message)
		{
			return ((::System::String*(*)(::System::Xml::XmlReader*, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGFORMATEXCEPTION_COMPOSEMESSAGE_OFFSET))(reader, message);
		}
	};
}
