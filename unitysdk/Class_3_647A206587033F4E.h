#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_14.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
template <typename T> class Class_3_647A206587033F4E;

inline static constexpr unsigned int Class_3_647A206587033F4E_TypeDefinitionIndex = 54311;

template <typename T>
class Class_3_647A206587033F4E : public ::Class_2_A48F3719AA1CF200_14
{
public:
	::MoleMole::UIControlReference* Field_3_0; // 0x0
	static ::Foundation::ObjectPool_1<::Class_3_647A206587033F4E<T>*>** StaticGet_Field_3_1()
	{
		return (::Foundation::ObjectPool_1<::Class_3_647A206587033F4E<T>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_647A206587033F4E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
