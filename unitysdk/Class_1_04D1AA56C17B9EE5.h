#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89A4B712ECD00582_Enum_3_25A7865FE672553E.h"
#include "unitysdk/Struct_2_CCB7B6AD9A01404D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

class Class_2_8758E40D9FAA51DB;
namespace System { class String; }
namespace System::Text { class Encoding; }

#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_1B0BDDD4CDF23905_OFFSET UNITYSDK_OFFSET(0x1AEB2040)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_213684CF9DE31333_1_OFFSET UNITYSDK_OFFSET(0x1AEB2DB0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_213684CF9DE31333_OFFSET UNITYSDK_OFFSET(0x1AEB2C20)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_339807DCBE106313_OFFSET UNITYSDK_OFFSET(0x1AEB23C0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_392EB1F33DB50875_OFFSET UNITYSDK_OFFSET(0x1AEB31A0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_4893835E6F49E9AB_OFFSET UNITYSDK_OFFSET(0x1AEB19D0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_49798098DBBF7BE8_1_OFFSET UNITYSDK_OFFSET(0x1AEB2F00)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_49798098DBBF7BE8_OFFSET UNITYSDK_OFFSET(0x1AEB1F20)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_4DB1B0769BABD3B3_OFFSET UNITYSDK_OFFSET(0x1AEB2E30)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_54865115FE600A89_OFFSET UNITYSDK_OFFSET(0x1AEB2EF0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_56C8C0B45D140BCA_OFFSET UNITYSDK_OFFSET(0x1AEB3070)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_571279ED96E9F25D_OFFSET UNITYSDK_OFFSET(0x1AEB16C0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_5FEED8B10C832649_OFFSET UNITYSDK_OFFSET(0x1AEB3080)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_641B8ABDA25A863C_OFFSET UNITYSDK_OFFSET(0x1AEB1C70)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_6AB3AB1264FB3C17_OFFSET UNITYSDK_OFFSET(0x1AEB28F0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_6AC6A74CD461D15B_OFFSET UNITYSDK_OFFSET(0x1AEB1AB0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_864B70EBD5D380AE_OFFSET UNITYSDK_OFFSET(0x1AEB3020)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_89D76F12B047A829_OFFSET UNITYSDK_OFFSET(0x1AEB2C40)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_9019B242F1E5593A_1_OFFSET UNITYSDK_OFFSET(0x1AEB15A0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_9019B242F1E5593A_OFFSET UNITYSDK_OFFSET(0x1AEB1480)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_9343C3DFD747F72C_OFFSET UNITYSDK_OFFSET(0x1AEB2EE0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_AB0469F7C5E2309D_OFFSET UNITYSDK_OFFSET(0x1AEB2AA0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_C00F7443A5501F5D_OFFSET UNITYSDK_OFFSET(0x1AEB2590)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_C2C8910D4F9B95D9_OFFSET UNITYSDK_OFFSET(0x1AEB2DD0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_CB1C48CAEEE7D9F5_OFFSET UNITYSDK_OFFSET(0x1AEB1D10)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_E50AEE745A3D09FD_OFFSET UNITYSDK_OFFSET(0x1AEB2D00)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_E7DE17D157696808_1_OFFSET UNITYSDK_OFFSET(0x1AEB2A90)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_E7DE17D157696808_OFFSET UNITYSDK_OFFSET(0x1AEB28E0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_F280E2CC252836F1_1_OFFSET UNITYSDK_OFFSET(0x1AEB1EC0)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_F280E2CC252836F1_OFFSET UNITYSDK_OFFSET(0x1AEB2360)
#define CLASS_1_04D1AA56C17B9EE5_METHOD_1_FA900991771D462A_OFFSET UNITYSDK_OFFSET(0x1AEAF140)
#define CLASS_1_04D1AA56C17B9EE5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEB1400)

inline static constexpr unsigned int Class_1_04D1AA56C17B9EE5_TypeDefinitionIndex = 9296;

class Class_1_04D1AA56C17B9EE5 : public ::System::Object
{
public:
	static ::System::Text::Encoding** StaticGet_Field_1_0()
	{
		return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D1AA56C17B9EE5_TypeDefinitionIndex)->GetStaticField(0x8000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9019B242F1E5593A(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_9019B242F1E5593A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_571279ED96E9F25D(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_571279ED96E9F25D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CB1C48CAEEE7D9F5(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_CB1C48CAEEE7D9F5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_6AC6A74CD461D15B(::System::Span_1<::System::Byte> a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::String* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::Struct_2_CCB7B6AD9A01404D&, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_6AC6A74CD461D15B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49798098DBBF7BE8(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_49798098DBBF7BE8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F280E2CC252836F1(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Byte a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_F280E2CC252836F1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_339807DCBE106313(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::ReadOnlySpan_1<::System::Byte> a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_339807DCBE106313_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C00F7443A5501F5D(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_C00F7443A5501F5D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1B0BDDD4CDF23905(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_1B0BDDD4CDF23905_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E7DE17D157696808(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_E7DE17D157696808_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E7DE17D157696808_1(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_E7DE17D157696808_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AB0469F7C5E2309D(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_AB0469F7C5E2309D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_213684CF9DE31333(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_213684CF9DE31333_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_89D76F12B047A829(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::Class_2_8758E40D9FAA51DB* a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::Class_2_8758E40D9FAA51DB*))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_89D76F12B047A829_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E50AEE745A3D09FD(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_E50AEE745A3D09FD_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_213684CF9DE31333_1(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_213684CF9DE31333_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C2C8910D4F9B95D9(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_C2C8910D4F9B95D9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_641B8ABDA25A863C(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::Il2CppArray<::System::Byte>* a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_641B8ABDA25A863C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_6AB3AB1264FB3C17(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_6AB3AB1264FB3C17_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4DB1B0769BABD3B3(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Byte a3, ::System::Byte a4)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_4DB1B0769BABD3B3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FA900991771D462A(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_FA900991771D462A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9343C3DFD747F72C(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Int64 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_9343C3DFD747F72C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9019B242F1E5593A_1(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_9019B242F1E5593A_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F280E2CC252836F1_1(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Byte a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_F280E2CC252836F1_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_54865115FE600A89(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Int32 a3, ::Class_1_89A4B712ECD00582_Enum_3_25A7865FE672553E a4)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Int32, ::Class_1_89A4B712ECD00582_Enum_3_25A7865FE672553E))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_54865115FE600A89_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49798098DBBF7BE8_1(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_49798098DBBF7BE8_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_864B70EBD5D380AE(::System::Byte& a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::System::Byte&, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_864B70EBD5D380AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_56C8C0B45D140BCA(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_56C8C0B45D140BCA_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_4893835E6F49E9AB(::System::Span_1<::System::Byte> a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::String* a3)
	{
		return ((::System::Int32(*)(::System::Span_1<::System::Byte>, ::Struct_2_CCB7B6AD9A01404D&, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_4893835E6F49E9AB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5FEED8B10C832649(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Double a3)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_5FEED8B10C832649_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_392EB1F33DB50875(::System::Span_1<::System::Byte>& a1, ::Struct_2_CCB7B6AD9A01404D& a2, ::System::Byte a3, ::System::Byte a4)
	{
		return ((::System::Void(*)(::System::Span_1<::System::Byte>&, ::Struct_2_CCB7B6AD9A01404D&, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_04D1AA56C17B9EE5_METHOD_1_392EB1F33DB50875_OFFSET))(a1, a2, a3, a4);
	}
};
