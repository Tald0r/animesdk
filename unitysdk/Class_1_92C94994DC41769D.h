#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2187E7700BED0850.h"
#include "unitysdk/System/Object.h"

class Class_1_368BA05DC0912CDA;
class Class_1_92C94994DC41769D_Class_3_F9FBE0023F8F7383;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92C94994DC41769D_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x7F85080)
#define CLASS_1_92C94994DC41769D_METHOD_1_B6F5FE4144664413_OFFSET UNITYSDK_OFFSET(0x7F84FE0)
#define CLASS_1_92C94994DC41769D__CTOR_OFFSET UNITYSDK_OFFSET(0x7F84F90)

inline static constexpr unsigned int Class_1_92C94994DC41769D_TypeDefinitionIndex = 67430;

class Class_1_92C94994DC41769D : public ::System::Object
{
public:
	::Class_1_92C94994DC41769D_Class_3_F9FBE0023F8F7383* Field_1_0; // 0x10
	::Class_1_368BA05DC0912CDA* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_92C94994DC41769D_Class_3_F9FBE0023F8F7383* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_92C94994DC41769D_Class_3_F9FBE0023F8F7383*))((::PBYTE)hIl2Cpp + CLASS_1_92C94994DC41769D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6F5FE4144664413(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::IList_1<::Enum_3_2187E7700BED0850>* a2, ::Enum_3_2187E7700BED0850 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::Enum_3_2187E7700BED0850>*, ::Enum_3_2187E7700BED0850))((::PBYTE)hIl2Cpp + CLASS_1_92C94994DC41769D_METHOD_1_B6F5FE4144664413_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_368BA05DC0912CDA* Method_1_24748FC20F375725()
	{
		return ((::Class_1_368BA05DC0912CDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92C94994DC41769D_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
