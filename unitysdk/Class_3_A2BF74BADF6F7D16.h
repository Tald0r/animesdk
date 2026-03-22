#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_4.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

inline static constexpr unsigned int Class_3_A2BF74BADF6F7D16_TypeDefinitionIndex = 37354;

template <typename T>
class Class_3_A2BF74BADF6F7D16 : public ::Class_2_A48F3719AA1CF200_4
{
public:
	::MoleMole::UIControlReference* Field_3_0; // 0x0
	static ::Foundation::ObjectPool_1<::Class_3_A2BF74BADF6F7D16<T>*>** StaticGet_Field_3_1()
	{
		return (::Foundation::ObjectPool_1<::Class_3_A2BF74BADF6F7D16<T>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A2BF74BADF6F7D16_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
