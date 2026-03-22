#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_269;
class Class_1_5A6771CD0CA2718D;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_RANDOMTEXTURESHEETDATA_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0x6B1D800)
#define MOLEMOLE_RANDOMTEXTURESHEETDATA_RANDOM_OFFSET UNITYSDK_OFFSET(0x6B1D8A0)
#define MOLEMOLE_RANDOMTEXTURESHEETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x6B1DAF0)

namespace MoleMole
{
	inline static constexpr unsigned int RandomTextureSheetData_TypeDefinitionIndex = 59710;

	class RandomTextureSheetData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::System::Int32>*>* Items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMTEXTURESHEETDATA__CTOR_OFFSET))(this);
		}

		::Class_1_5A6771CD0CA2718D* CreatePlayer(::Class_0_16E4307DCC419505_269* textureSheetImpl)
		{
			return ((::Class_1_5A6771CD0CA2718D*(*)(::PVOID, ::Class_0_16E4307DCC419505_269*))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMTEXTURESHEETDATA_CREATEPLAYER_OFFSET))(this, textureSheetImpl);
		}

		::System::String* Random()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMTEXTURESHEETDATA_RANDOM_OFFSET))(this);
		}
	};
}
