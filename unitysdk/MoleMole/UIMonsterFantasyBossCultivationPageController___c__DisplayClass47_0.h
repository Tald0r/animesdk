#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_757827E019DC7C45;
class Class_3_809D1C94CBDD4811_5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__BUILDCLIENTMONSTERINFO_B__0_OFFSET UNITYSDK_OFFSET(0x8F50BC0)
#define MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F50BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossCultivationPageController___c__DisplayClass47_0_TypeDefinitionIndex = 67710;

	class UIMonsterFantasyBossCultivationPageController___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::Class_3_809D1C94CBDD4811_5* serverInfo; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* skillIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__0(::Class_1_757827E019DC7C45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_757827E019DC7C45*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__BUILDCLIENTMONSTERINFO_B__0_OFFSET))(this, x);
		}
	};
}
