#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6CD1E70)
#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6CD1EB0)
#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__ONINFO_B__17_2_OFFSET UNITYSDK_OFFSET(0x6CD1EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMaincityMiniGameChildWindowController___c_TypeDefinitionIndex = 74777;

	class UIMaincityMiniGameChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMaincityMiniGameChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMaincityMiniGameChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityMiniGameChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C560);
		}
		static ::System::Converter_2<::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915*, ::System::Int32>** StaticGet___9__17_2()
		{
			return (::System::Converter_2<::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityMiniGameChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnInfo_b__17_2(::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915* t)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__ONINFO_B__17_2_OFFSET))(this, t);
		}
	};
}
