#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }
namespace System { class Type; }

#define FLOWCANVAS_TYPECONVERTER_HASCONVERTION_OFFSET UNITYSDK_OFFSET(0x19FEA2D0)
#define FLOWCANVAS_TYPECONVERTER_QUICKCONVERT_OFFSET UNITYSDK_OFFSET(0x19FEA350)

namespace FlowCanvas
{
	inline static constexpr unsigned int TypeConverter_TypeDefinitionIndex = 25629;

	class TypeConverter : public ::System::Object
	{
	public:
		static ::System::Boolean HasConvertion(::System::Type* sourceType, ::System::Type* targetType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_TYPECONVERTER_HASCONVERTION_OFFSET))(sourceType, targetType);
		}

		static ::System::Object* QuickConvert(::System::Object* obj, ::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_TYPECONVERTER_QUICKCONVERT_OFFSET))(obj, type);
		}
	};
}
