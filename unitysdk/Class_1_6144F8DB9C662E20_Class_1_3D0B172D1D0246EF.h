#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_6144F8DB9C662E20_CLASS_1_3D0B172D1D0246EF_METHOD_1_37C1101E3ADF889F_OFFSET UNITYSDK_OFFSET(0x9F65A90)
#define CLASS_1_6144F8DB9C662E20_CLASS_1_3D0B172D1D0246EF__CTOR_OFFSET UNITYSDK_OFFSET(0x9F65A80)

inline static constexpr unsigned int Class_1_6144F8DB9C662E20_Class_1_3D0B172D1D0246EF_TypeDefinitionIndex = 59319;

class Class_1_6144F8DB9C662E20_Class_1_3D0B172D1D0246EF : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::IEnumerable_1<::System::String*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6144F8DB9C662E20_CLASS_1_3D0B172D1D0246EF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_1_37C1101E3ADF889F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6144F8DB9C662E20_CLASS_1_3D0B172D1D0246EF_METHOD_1_37C1101E3ADF889F_OFFSET))(this);
	}
};
