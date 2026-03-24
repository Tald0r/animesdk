#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_96C7E68A4946748D.h"
#include "unitysdk/Struct_2_EB8B7F5FFB953B6C.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_2_0A2E20DCFD15C080_TypeDefinitionIndex = 39360;

template <typename T>
class Class_2_0A2E20DCFD15C080 : public ::Class_1_96C7E68A4946748D
{
public:
	static T* StaticGet_Field_2_0()
	{
		return (T*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0A2E20DCFD15C080_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::Class_1_96C7E68A4946748D*>* Field_2_1; // 0x0
};
