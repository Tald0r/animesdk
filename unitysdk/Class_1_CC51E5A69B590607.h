#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_7;
class Class_1_65FE0282E8B727BF;
class Class_3_F6C4C44754A545F8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CC51E5A69B590607_METHOD_1_1559DF961FFD7476_OFFSET UNITYSDK_OFFSET(0x1B498380)
#define CLASS_1_CC51E5A69B590607__CTOR_OFFSET UNITYSDK_OFFSET(0x1B498370)

inline static constexpr unsigned int Class_1_CC51E5A69B590607_TypeDefinitionIndex = 25699;

class Class_1_CC51E5A69B590607 : public ::System::Object
{
public:
	::Class_3_F6C4C44754A545F8* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor(::System::String* a1, ::Class_3_F6C4C44754A545F8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_F6C4C44754A545F8*))((::PBYTE)hIl2Cpp + CLASS_1_CC51E5A69B590607__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_65FE0282E8B727BF* Method_1_1559DF961FFD7476(::Class_1_43BD383C98B4C0C5_7* a1, ::System::Collections::Generic::List_1<::Class_1_65FE0282E8B727BF*>* a2)
	{
		return ((::Class_1_65FE0282E8B727BF*(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_7*, ::System::Collections::Generic::List_1<::Class_1_65FE0282E8B727BF*>*))((::PBYTE)hIl2Cpp + CLASS_1_CC51E5A69B590607_METHOD_1_1559DF961FFD7476_OFFSET))(this, a1, a2);
	}
};
