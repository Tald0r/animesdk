#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A.h"
#include "unitysdk/Struct_2_11FD83788053949F_4.h"
#include "unitysdk/Struct_2_A840136A4E657746.h"
#include "unitysdk/Struct_2_A840136A4E657746_3.h"
#include "unitysdk/System/Object.h"

class Class_2_EA1C4A1A308E269F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_37D514970FB5DFBF_METHOD_1_623504290BD21EEF_OFFSET UNITYSDK_OFFSET(0x996F8B0)
#define CLASS_1_37D514970FB5DFBF__CCTOR_OFFSET UNITYSDK_OFFSET(0x996F810)
#define CLASS_1_37D514970FB5DFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x996F5B0)

inline static constexpr unsigned int Class_1_37D514970FB5DFBF_TypeDefinitionIndex = 66435;

class Class_1_37D514970FB5DFBF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_37D514970FB5DFBF*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_37D514970FB5DFBF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37D514970FB5DFBF_TypeDefinitionIndex)->GetStaticField(0x444C0);
	}
	::Struct_2_A840136A4E657746_3 Field_1_1; // 0x10
	::Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A Field_1_4; // 0x1C
	::Struct_2_A840136A4E657746 Field_1_3; // 0x20
	::Struct_2_11FD83788053949F_4 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37D514970FB5DFBF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_37D514970FB5DFBF__CCTOR_OFFSET))();
	}

	::Class_2_EA1C4A1A308E269F* Method_1_623504290BD21EEF()
	{
		return ((::Class_2_EA1C4A1A308E269F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37D514970FB5DFBF_METHOD_1_623504290BD21EEF_OFFSET))(this);
	}
};
