#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
template <typename T1, typename T2> class Class_1_D4CCA64101A9C471;

#define CLASS_1_0C2B50B4E54DB417_METHOD_1_608ECB5CEA2C4C58_OFFSET UNITYSDK_OFFSET(0x83B15D0)
#define CLASS_1_0C2B50B4E54DB417_METHOD_1_EA6D328EF56CB9CB_OFFSET UNITYSDK_OFFSET(0x83B14E0)
#define CLASS_1_0C2B50B4E54DB417__CTOR_OFFSET UNITYSDK_OFFSET(0x83B12B0)

inline static constexpr unsigned int Class_1_0C2B50B4E54DB417_TypeDefinitionIndex = 78718;

class Class_1_0C2B50B4E54DB417 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_D4CCA64101A9C471<::System::UInt32, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D4CCA64101A9C471<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0C2B50B4E54DB417__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EA6D328EF56CB9CB(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C2B50B4E54DB417_METHOD_1_EA6D328EF56CB9CB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Method_1_608ECB5CEA2C4C58()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C2B50B4E54DB417_METHOD_1_608ECB5CEA2C4C58_OFFSET))(this);
	}
};
