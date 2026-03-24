#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A.h"
#include "unitysdk/Struct_2_11FD83788053949F_1.h"
#include "unitysdk/Struct_2_11FD83788053949F_3.h"
#include "unitysdk/Struct_2_1BFEC81CE649A34F_1.h"
#include "unitysdk/System/Object.h"

class Class_2_EA1C4A1A308E269F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_37D514970FB5DFBF_METHOD_1_4099E09687409048_OFFSET UNITYSDK_OFFSET(0x74C3D50)
#define CLASS_1_37D514970FB5DFBF__CCTOR_OFFSET UNITYSDK_OFFSET(0x74C3CB0)
#define CLASS_1_37D514970FB5DFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x74C3A60)

inline static constexpr unsigned int Class_1_37D514970FB5DFBF_TypeDefinitionIndex = 71369;

class Class_1_37D514970FB5DFBF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_37D514970FB5DFBF*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_37D514970FB5DFBF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37D514970FB5DFBF_TypeDefinitionIndex)->GetStaticField(0x3A6C0);
	}
	::Struct_2_11FD83788053949F_3 Field_1_2; // 0x10
	::Struct_2_11FD83788053949F_1 Field_1_1; // 0x1C
	::Struct_2_1BFEC81CE649A34F_1 Field_1_3; // 0x28
	::Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37D514970FB5DFBF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_37D514970FB5DFBF__CCTOR_OFFSET))();
	}

	::Class_2_EA1C4A1A308E269F* Method_1_4099E09687409048()
	{
		return ((::Class_2_EA1C4A1A308E269F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37D514970FB5DFBF_METHOD_1_4099E09687409048_OFFSET))(this);
	}
};
