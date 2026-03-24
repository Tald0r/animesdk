#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_576D5808A8CE1493_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x7E21140)
#define CLASS_3_576D5808A8CE1493_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7E213D0)
#define CLASS_3_576D5808A8CE1493_METHOD_3_E0FE75548F0155D5_OFFSET UNITYSDK_OFFSET(0x7E21200)
#define CLASS_3_576D5808A8CE1493__CTOR_OFFSET UNITYSDK_OFFSET(0x7E21330)

inline static constexpr unsigned int Class_3_576D5808A8CE1493_TypeDefinitionIndex = 76693;

class Class_3_576D5808A8CE1493 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_576D5808A8CE1493__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_576D5808A8CE1493_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_E0FE75548F0155D5(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_576D5808A8CE1493_METHOD_3_E0FE75548F0155D5_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_576D5808A8CE1493_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
