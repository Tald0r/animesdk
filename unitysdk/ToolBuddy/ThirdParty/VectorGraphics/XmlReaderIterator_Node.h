#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlReader; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGFormatException; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGPropertySheet; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x193BAC70)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1939FB30)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETUNSUPPORTEDATTRIBVALEXCEPTION_OFFSET UNITYSDK_OFFSET(0x193ACAE0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x193C4250)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1939E400)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x193C4240)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE__CTOR_OFFSET UNITYSDK_OFFSET(0x193C41F0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int XmlReaderIterator_Node_TypeDefinitionIndex = 26999;

	class XmlReaderIterator_Node : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Xml::XmlReader* reader; // 0x18
		::System::Int32 depth; // 0x20

		::System::Void _ctor(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE__CTOR_OFFSET))(this, reader);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Item(::System::String* attrib)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_ITEM_OFFSET))(this, attrib);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet* GetAttributes()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGPropertySheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETATTRIBUTES_OFFSET))(this);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SVGFormatException* GetException(::System::String* message)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGFormatException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETEXCEPTION_OFFSET))(this, message);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SVGFormatException* GetUnsupportedAttribValException(::System::String* attrib)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGFormatException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GETUNSUPPORTEDATTRIBVALEXCEPTION_OFFSET))(this, attrib);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_NODE_GET_DEPTH_OFFSET))(this);
		}
	};
}
