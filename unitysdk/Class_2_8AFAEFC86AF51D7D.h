#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1075.h"

class Class_2_208CC9941471731A_958;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8AFAEFC86AF51D7D_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x1A90B510)
#define CLASS_2_8AFAEFC86AF51D7D_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1A90B3D0)
#define CLASS_2_8AFAEFC86AF51D7D_METHOD_2_6AD339F282AC5D0C_OFFSET UNITYSDK_OFFSET(0x1A90B630)
#define CLASS_2_8AFAEFC86AF51D7D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A90B270)
#define CLASS_2_8AFAEFC86AF51D7D_METHOD_2_CEB5A1666EAB8324_OFFSET UNITYSDK_OFFSET(0x1A90BB10)
#define CLASS_2_8AFAEFC86AF51D7D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A90B2D0)

inline static constexpr unsigned int Class_2_8AFAEFC86AF51D7D_TypeDefinitionIndex = 24968;

class Class_2_8AFAEFC86AF51D7D : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_958*>* Field_2_1; // 0x18
	::Struct_2_1862835F8661A21F_1075 Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_958*>*>* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_6AD339F282AC5D0C(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D_METHOD_2_6AD339F282AC5D0C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_958*>* Method_2_CEB5A1666EAB8324(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_958*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D_METHOD_2_CEB5A1666EAB8324_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D_METHOD_2_0865E94460F11643_OFFSET))(this);
	}
};
