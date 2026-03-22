#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_655;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA08EB80)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA08EBC0)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__INITMEMORYDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0xA08EBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMemoryDialogV2PopWindowController___c_TypeDefinitionIndex = 68477;

	class UIWorkBenchMemoryDialogV2PopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIWorkBenchMemoryDialogV2PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchMemoryDialogV2PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMemoryDialogV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2D730);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_655*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_655*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMemoryDialogV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2D738);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMemoryData_b__10_0(::Class_2_208CC9941471731A_655* a, ::Class_2_208CC9941471731A_655* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_655*, ::Class_2_208CC9941471731A_655*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__INITMEMORYDATA_B__10_0_OFFSET))(this, a, b);
		}
	};
}
