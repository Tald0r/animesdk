#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MdbEditor/MdbGenericPanel.h"

#define MDBEDITOR_MDBCOMPPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x124A4570)

namespace MdbEditor
{
	inline static constexpr unsigned int MdbCompPanel_TypeDefinitionIndex = 82115;

	class MdbCompPanel : public ::MdbEditor::MdbGenericPanel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBCOMPPANEL__CTOR_OFFSET))(this);
		}
	};
}
