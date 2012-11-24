#ifndef INCLUDED_format_swf_symbol_StaticText
#define INCLUDED_format_swf_symbol_StaticText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(format,SWF)
HX_DECLARE_CLASS3(format,swf,data,SWFStream)
HX_DECLARE_CLASS3(format,swf,symbol,StaticText)
HX_DECLARE_CLASS2(neash,display,Graphics)
HX_DECLARE_CLASS2(neash,geom,Matrix)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
namespace format{
namespace swf{
namespace symbol{


class StaticText_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StaticText_obj OBJ_;
		StaticText_obj();
		Void __construct(::format::SWF swf,::format::swf::data::SWFStream stream,int version);

	public:
		static hx::ObjectPtr< StaticText_obj > __new(::format::SWF swf,::format::swf::data::SWFStream stream,int version);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~StaticText_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StaticText"); }

		virtual Void render( ::neash::display::Graphics graphics);
		Dynamic render_dyn();

		::neash::geom::Matrix textMatrix; /* REM */ 
		Dynamic records; /* REM */ 
		::neash::geom::Rectangle bounds; /* REM */ 
};

} // end namespace format
} // end namespace swf
} // end namespace symbol

#endif /* INCLUDED_format_swf_symbol_StaticText */ 