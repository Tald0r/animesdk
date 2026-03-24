#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialDialogContenxt.h"

class Class_1_8C25B6E4C19F237F_Class_1_9E89B2D44593C915;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB96E180)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialMultiGroupContext_TypeDefinitionIndex = 38235;

	class UIAllroundGeneralTutorialMultiGroupContext : public ::MoleMole::UIAllroundGeneralTutorialDialogContenxt
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_8C25B6E4C19F237F_Class_1_9E89B2D44593C915*>* multiGroupData; // 0x38

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_8C25B6E4C19F237F_Class_1_9E89B2D44593C915*>* multiGroupData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_8C25B6E4C19F237F_Class_1_9E89B2D44593C915*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPCONTEXT__CTOR_OFFSET))(this, multiGroupData);
		}
	};
}
