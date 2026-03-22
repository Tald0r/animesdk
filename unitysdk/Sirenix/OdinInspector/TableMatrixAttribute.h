#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_TABLEMATRIXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0A770)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TableMatrixAttribute_TypeDefinitionIndex = 7232;

	class TableMatrixAttribute : public ::System::Attribute
	{
	public:
		::System::String* HorizontalTitle; // 0x10
		::System::String* VerticalTitle; // 0x18
		::System::String* DrawElementMethod; // 0x20
		::System::Int32 RowHeight; // 0x28
		::System::Boolean RespectIndentLevel; // 0x2C
		::System::Boolean IsReadOnly; // 0x2D
		::System::Boolean SquareCells; // 0x2E
		::System::Boolean HideRowIndices; // 0x2F
		::System::Boolean HideColumnIndices; // 0x30
		::System::Boolean Transpose; // 0x31
		::System::Boolean ResizableColumns; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLEMATRIXATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
