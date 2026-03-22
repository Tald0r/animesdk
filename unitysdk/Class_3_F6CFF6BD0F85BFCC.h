#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_F6CFF6BD0F85BFCC_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x5EC73E0)
#define CLASS_3_F6CFF6BD0F85BFCC_METHOD_3_6A9E2D3D0AFF1A23_OFFSET UNITYSDK_OFFSET(0x5EC75C0)
#define CLASS_3_F6CFF6BD0F85BFCC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x5EC7840)
#define CLASS_3_F6CFF6BD0F85BFCC__CTOR_OFFSET UNITYSDK_OFFSET(0x5EC7720)

inline static constexpr unsigned int Class_3_F6CFF6BD0F85BFCC_TypeDefinitionIndex = 40019;

class Class_3_F6CFF6BD0F85BFCC : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_2; // 0x18
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_0; // 0x20
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6CFF6BD0F85BFCC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6CFF6BD0F85BFCC_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_6A9E2D3D0AFF1A23(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_F6CFF6BD0F85BFCC_METHOD_3_6A9E2D3D0AFF1A23_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6CFF6BD0F85BFCC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
