#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EDF4DCFB9AF1C323.h"

class Class_0_16E4307DCC419505_96;
class Class_2_A6AB361087DA8B6A;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T1, typename T2> class Class_1_D4ADA9622A821F86;
template <typename T> class Class_1_634159F7561ADAA0;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_07823A1A479353C2;
template <typename T> class Class_2_176E5E1390CC2238;
template <typename T> class Class_2_6251F12416E74305;
template <typename T> class Class_2_75527B5277EE1A90;
template <typename T> class Class_2_75527B5277EE1A90_Class_3_B6136C2F127116DF_4;
template <typename T> class Class_2_AC5BE73896994529;

#define CLASS_2_2F8C69E540B4CCEC_METHOD_2_19F5EE34A3136E03_OFFSET UNITYSDK_OFFSET(0x198CDD80)
#define CLASS_2_2F8C69E540B4CCEC_METHOD_2_71669A9BEDC9C792_OFFSET UNITYSDK_OFFSET(0x198CDA90)
#define CLASS_2_2F8C69E540B4CCEC_METHOD_2_9D7953BF2347FC07_OFFSET UNITYSDK_OFFSET(0x198CD800)
#define CLASS_2_2F8C69E540B4CCEC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x198CD770)
#define CLASS_2_2F8C69E540B4CCEC__CTOR_OFFSET UNITYSDK_OFFSET(0x198CD6F0)

inline static constexpr unsigned int Class_2_2F8C69E540B4CCEC_TypeDefinitionIndex = 31510;

class Class_2_2F8C69E540B4CCEC : public ::Class_1_EDF4DCFB9AF1C323
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x38
	::System::Boolean Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F8C69E540B4CCEC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F8C69E540B4CCEC__CTOR_1_OFFSET))(this, a1);
	}

	::Class_2_A6AB361087DA8B6A* Method_2_9D7953BF2347FC07(::System::Func_1<::System::Collections::IEnumerable*>* a1, ::System::String* a2)
	{
		return ((::Class_2_A6AB361087DA8B6A*(*)(::PVOID, ::System::Func_1<::System::Collections::IEnumerable*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2F8C69E540B4CCEC_METHOD_2_9D7953BF2347FC07_OFFSET))(this, a1, a2);
	}

	::Class_2_2F8C69E540B4CCEC* Method_2_19F5EE34A3136E03(::System::Boolean a1)
	{
		return ((::Class_2_2F8C69E540B4CCEC*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F8C69E540B4CCEC_METHOD_2_19F5EE34A3136E03_OFFSET))(this, a1);
	}

	::System::String* Method_2_71669A9BEDC9C792(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2F8C69E540B4CCEC_METHOD_2_71669A9BEDC9C792_OFFSET))(this, a1);
	}
};
